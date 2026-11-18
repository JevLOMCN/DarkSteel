// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 5

// ~FMovieSceneBlendingAccumulator @ 146184fa0

void __thiscall
FMovieSceneBlendingAccumulator::~FMovieSceneBlendingAccumulator
          (FMovieSceneBlendingAccumulator *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8>,int>
            ((TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *)
             (this->UnboundBlendState).TokensToBlend.AllocatorInstance.Data,
             (this->UnboundBlendState).TokensToBlend.ArrayNum);
  pFVar1 = (this->UnboundBlendState).TokensToBlend.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->OperandToBlendState).field_0x48 = 0;
  pvVar2 = *(void **)&(this->OperandToBlendState).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OperandToBlendState);
  *(undefined4 *)&(this->Actuators).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Actuators).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// Apply @ 146193020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneBlendingAccumulator::Apply
          (FMovieSceneBlendingAccumulator *this,FMovieSceneContext *param_1,
          FPersistentEvaluationData *param_2,IMovieScenePlayer *param_3)

{
  TMap<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>_>
  *pTVar1;
  undefined1 *puVar2;
  int *piVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>_>
  *pTVar6;
  FMovieSceneBlendingAccumulator *pFVar7;
  bool bVar8;
  ulonglong uVar9;
  byte bVar10;
  ForAnyElementType FVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  ulonglong uVar21;
  ForElementType<unsigned_int> FVar22;
  undefined1 *puVar23;
  ulonglong uVar24;
  ulonglong *puVar25;
  uint *puVar26;
  undefined1 auStackY_318 [32];
  undefined1 local_2d8;
  undefined1 local_2d7;
  undefined1 local_2d6 [6];
  ulonglong local_2d0;
  TMap<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>_>
  *local_2c8;
  int iStack_2c0;
  uint uStack_2bc;
  TBitArray<FDefaultBitArrayAllocator> *local_2b8;
  undefined4 uStack_2b0;
  uint uStack_2ac;
  int local_2a8;
  undefined4 uStack_2a4;
  int iStack_2a0;
  undefined4 uStack_29c;
  uint local_298;
  uint uStack_294;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_290;
  undefined4 local_288;
  uint uStack_284;
  uint uStack_280;
  undefined4 uStack_27c;
  TMap<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>_>
  *local_278;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_270;
  undefined8 local_250;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_248;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_210;
  undefined4 local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  FMovieSceneBlendingAccumulator *local_1d8;
  IMovieScenePlayer *local_1d0;
  FMovieSceneContext *local_1c8;
  FPersistentEvaluationData *local_1c0;
  longlong *local_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1b0;
  TMap<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>_>
  *local_190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_188;
  undefined8 uStack_168;
  longlong *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_158;
  undefined8 uStack_138;
  FMovieSceneEvaluationOperand local_128;
  FMovieSceneEvaluationOperand local_108 [3];
  undefined4 local_cc;
  undefined4 local_ac;
  undefined1 local_a8 [32];
  ForElementType<unsigned_int> local_88;
  uint local_80;
  int local_7c;
  int local_78;
  int local_74;
  FScriptContainerElement local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_318;
  uVar12 = 0;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (ForElementType<unsigned_int>)0x0;
  local_80 = 0;
  local_74 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_7c = 0x80;
  local_78 = -1;
  local_1d8 = this;
  local_1d0 = param_3;
  local_1c8 = param_1;
  local_1c0 = param_2;
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_a8,0x80);
  for (lVar14 = 0x3f; 0x8fUL >> lVar14 == 0; lVar14 = lVar14 + -1) {
  }
  uVar16 = 1 << ((byte)lVar14 & 0x1f);
  local_1f0 = (undefined4)lVar14;
  local_2d0 = 1;
  if ((local_60 != 0) && ((int)uVar16 <= (int)local_60)) goto LAB_146193323;
  local_60 = uVar16;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
  }
  if (uVar16 != 0) {
    uVar19 = uVar16;
    if (uVar16 < 2) {
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        uVar19 = 0;
        goto LAB_146193135;
      }
    }
    else {
LAB_146193135:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar19,4);
    }
    if (0 < (int)uVar16) {
      uVar24 = (ulonglong)uVar16;
      uVar21 = uVar12;
      do {
        FVar11.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_68.Data;
        }
        uVar9 = uVar21 & (longlong)(int)uVar16 - 1U;
        uVar21 = uVar21 + 1;
        *(undefined4 *)(FVar11.Data + uVar9 * 4) = 0xffffffff;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
  }
  if (local_60 != 0) {
    pTStack_290 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
    local_298 = 0;
    uStack_294 = 1;
    uStack_284 = 0;
    uStack_280 = 0;
    if (local_80 != 0) {
      FVar22 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
      if (local_88 != (ForElementType<unsigned_int>)0x0) {
        FVar22 = local_88;
      }
      uVar16 = *(uint *)FVar22;
      uVar21 = uVar12;
      while (uVar16 == 0) {
        uStack_280 = (int)uVar21 + 0x20;
        uVar21 = (ulonglong)uStack_280;
        iVar17 = (int)uVar12;
        local_298 = iVar17 + 1;
        uVar12 = (ulonglong)local_298;
        if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_298)
        goto LAB_146193239;
        uVar16 = ((uint *)((longlong)FVar22 + 4))[iVar17];
      }
      uStack_294 = -uVar16 & uVar16;
      uVar12 = (ulonglong)uStack_294 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_1ec = (int)lVar14;
      uStack_284 = (uStack_280 - 1) + local_1ec;
      uVar12 = (ulonglong)uStack_284;
      if ((int)local_80 < (int)uStack_284) {
LAB_146193239:
        uVar12 = (ulonglong)local_80;
        uStack_284 = local_80;
      }
    }
    local_288 = 0xffffffff;
    local_1b8 = (longlong *)local_a8;
    local_1b0._padding_ = CONCAT44(uStack_294,local_298);
    local_1b0.CurrentBitIndex = uStack_284;
    local_1b0.UnvisitedBitMask = 0xffffffff;
    local_1b0._28_4_ = uStack_27c;
    local_1b0.BaseBitIndex = uStack_280;
    local_1b0.Array = pTStack_290;
    if ((int)uVar12 < (int)local_80) {
      do {
        puVar25 = (ulonglong *)((longlong)(int)uVar12 * 0x60 + *local_1b8);
        uVar16 = ((uint)(*puVar25 >> 0x14) & 0xffff ^ (uint)(*puVar25 >> 4)) * -0x7a143595;
        uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
        uVar16 = ((int)(puVar25[1] >> 0x20) * 0x17 + (int)puVar25[1] ^ uVar16 >> 0x10 ^ uVar16) &
                 local_60 - 1;
        *(uint *)((longlong)puVar25 + 0x5c) = uVar16;
        FVar11.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_68.Data;
        }
        uVar21 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar16;
        *(undefined4 *)(puVar25 + 0xb) = *(undefined4 *)(FVar11.Data + uVar21 * 4);
        *(int *)(FVar11.Data + uVar21 * 4) = (int)uVar12;
        local_1b0.UnvisitedBitMask = local_1b0.UnvisitedBitMask & ~local_1b0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1b0);
        uVar12 = (ulonglong)(uint)local_1b0.CurrentBitIndex;
      } while (local_1b0.CurrentBitIndex < (local_1b0.Array)->NumBits);
    }
  }
LAB_146193323:
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  local_128.SequenceID.Value = 0;
  local_128.ObjectBindingID.A = 0;
  local_128.ObjectBindingID.B = 0;
  local_128.ObjectBindingID.C = 0;
  local_128.ObjectBindingID.D = 0;
  FMovieSceneAccumulatedBlendState::Consolidate
            (&this->UnboundBlendState,
             (TMap<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>,0>_>
              *)local_a8,&local_128,param_3);
  local_210._padding_._0_4_ = 0;
  pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->OperandToBlendState).field_0x10;
  local_210._padding_._4_4_ = 1;
  pTVar1 = &this->OperandToBlendState;
  local_210.UnvisitedBitMask = 0xffffffff;
  local_210.CurrentBitIndex = 0;
  local_210.BaseBitIndex = 0;
  local_210.Array = pTVar20;
  if (*(int *)&(this->OperandToBlendState).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_210);
  }
  uVar16 = *(uint *)&(this->OperandToBlendState).field_0x28;
  bVar10 = (byte)uVar16 & 0x1f;
  TStack_270._padding_ = CONCAT44(local_210._padding_._4_4_,(undefined4)local_210._padding_);
  local_250 = CONCAT44(local_250._4_4_,
                       *(int *)&(this->OperandToBlendState).field_0x8 -
                       *(int *)&(this->OperandToBlendState).field_0x34);
  TStack_270.CurrentBitIndex = local_210.CurrentBitIndex;
  TStack_270.UnvisitedBitMask = local_210.UnvisitedBitMask;
  TStack_270._28_4_ = local_210._28_4_;
  TStack_270.BaseBitIndex = local_210.BaseBitIndex;
  local_248._padding_._0_4_ = (int)uVar16 >> 5;
  local_248._padding_._4_4_ = 1 << bVar10;
  local_248.UnvisitedBitMask = -1 << bVar10;
  TStack_270.Array = local_210.Array;
  local_248.BaseBitIndex = uVar16 & 0xffffffe0;
  TStack_188.Array = local_210.Array;
  uStack_168 = local_250;
  local_278 = pTVar1;
  local_248.Array = pTVar20;
  local_248.CurrentBitIndex = uVar16;
  local_190 = pTVar1;
  TStack_188._padding_ = TStack_270._padding_;
  TStack_188._16_8_ = TStack_270._16_8_;
  TStack_188._24_8_ = TStack_270._24_8_;
  if (((int)uVar16 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar16 != *(uint *)&(this->OperandToBlendState).field_0x28) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_248);
    pTVar20 = local_248.Array;
    uVar16 = local_248.CurrentBitIndex;
  }
  while( true ) {
    pTVar6 = local_190;
    if (*(int *)&local_190->field_0x8 - *(int *)&local_190->field_0x34 != (int)uStack_168) {
      local_2d8 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2d8);
    }
    uVar19 = local_80;
    if (((TStack_188.CurrentBitIndex == uVar16) && (TStack_188.Array == pTVar20)) &&
       (pTVar6 == pTVar1)) break;
    puVar13 = (undefined8 *)((longlong)TStack_188.CurrentBitIndex * 0x30 + *(longlong *)pTVar6);
    local_108[0].ObjectBindingID._0_8_ = *puVar13;
    local_108[0].ObjectBindingID._8_8_ = puVar13[1];
    local_108[0].SequenceID.Value = *(uint *)(puVar13 + 2);
    FMovieSceneAccumulatedBlendState::Consolidate
              ((FMovieSceneAccumulatedBlendState *)(puVar13 + 3),
               (TMap<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>,0>_>
                *)local_a8,local_108,param_3);
    TStack_188.UnvisitedBitMask = TStack_188.UnvisitedBitMask & ~TStack_188._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_188);
  }
  iStack_2c0 = 0;
  local_2a8 = 0;
  uStack_2bc = (uint)local_2d0;
  uStack_2ac = 0;
  if (local_80 != 0) {
    FVar22 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
    if (local_88 != (ForElementType<unsigned_int>)0x0) {
      FVar22 = local_88;
    }
    uVar16 = *(uint *)FVar22;
    while (uVar16 == 0) {
      lVar14 = (longlong)iStack_2c0;
      local_2a8 = local_2a8 + 0x20;
      iStack_2c0 = iStack_2c0 + 1;
      uStack_2ac = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_2c0)
      goto LAB_146193570;
      uVar16 = ((uint *)((longlong)FVar22 + 4))[lVar14];
    }
    uStack_2bc = -uVar16 & uVar16;
    uVar12 = (ulonglong)uStack_2bc * 2 + 1;
    lVar14 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1e8 = (int)lVar14;
    uStack_2ac = local_2a8 + -1 + local_1e8;
    if ((int)local_80 < (int)uStack_2ac) {
      uStack_2ac = local_80;
    }
  }
LAB_146193570:
  local_2c8 = (TMap<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>_>
               *)local_a8;
  uStack_2a4 = local_cc;
  local_2b8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
  uVar16 = local_80 & 0xffffffe0;
  iStack_2a0 = local_a8._8_4_ - local_74;
  TStack_158._padding_ = CONCAT44(uStack_2bc,iStack_2c0);
  uStack_2b0 = 0xffffffff;
  TStack_158.CurrentBitIndex = uStack_2ac;
  TStack_158.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)local_80 >> 5;
  TStack_158._28_4_ = local_cc;
  TStack_158.BaseBitIndex = local_2a8;
  uStack_138 = CONCAT44(uStack_29c,iStack_2a0);
  bVar10 = (byte)local_80;
  local_160 = (longlong *)local_2c8;
  TStack_158.Array = local_2b8;
  if (((int)local_80 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar7 = local_1d8;
  if (uVar19 != local_80) {
    FVar22 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
    if (local_88 != (ForElementType<unsigned_int>)0x0) {
      FVar22 = local_88;
    }
    uVar19 = -1 << (bVar10 & 0x1f) & *(uint *)((longlong)FVar22 + (longlong)iVar17 * 4);
    while (uVar19 == 0) {
      lVar14 = (longlong)iVar17;
      uVar16 = uVar16 + 0x20;
      iVar17 = iVar17 + 1;
      uVar19 = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_1461936a1;
      uVar19 = ((uint *)((longlong)FVar22 + 4))[lVar14];
    }
    uVar12 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1e4 = (int)lVar14;
    uVar19 = (uVar16 - 1) + local_1e4;
    if ((int)local_80 < (int)uVar19) {
      uVar19 = local_80;
    }
  }
LAB_1461936a1:
  while( true ) {
    plVar15 = local_160;
    if ((int)local_160[1] - *(int *)((longlong)local_160 + 0x34) != (int)uStack_138) {
      local_2d7 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2d7);
    }
    if (((TStack_158.CurrentBitIndex == uVar19) &&
        (TStack_158.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))) &&
       (plVar15 == (longlong *)local_a8)) break;
    puVar13 = (undefined8 *)((longlong)TStack_158.CurrentBitIndex * 0x60 + *plVar15);
    plVar15 = puVar13 + 2;
    if ((*(byte *)(puVar13 + 10) & 1) == 0) {
      plVar15 = (longlong *)0x0;
    }
    else if ((*(byte *)(puVar13 + 10) & 2) == 0) {
      plVar15 = (longlong *)*plVar15;
    }
    (**(code **)(*plVar15 + 8))(plVar15,*puVar13,pFVar7,puVar13[1]);
    TStack_158.UnvisitedBitMask = TStack_158.UnvisitedBitMask & ~TStack_158._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_158);
  }
  FMovieSceneAccumulatedBlendState::Reset(&pFVar7->UnboundBlendState);
  iVar17 = *(int *)&(pFVar7->OperandToBlendState).field_0x28;
  puVar2 = &(pFVar7->OperandToBlendState).field_0x10;
  iStack_2c0 = 0;
  local_2a8 = 0;
  uStack_2ac = local_2a8;
  if (iVar17 != 0) {
    puVar26 = *(uint **)&(pFVar7->OperandToBlendState).field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)puVar2;
    }
    uVar16 = *puVar26;
    local_2a8 = 0;
    while (uVar16 == 0) {
      lVar14 = (longlong)iStack_2c0;
      local_2a8 = local_2a8 + 0x20;
      iStack_2c0 = iStack_2c0 + 1;
      uStack_2ac = iVar17;
      if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_2c0) goto LAB_146193801;
      uVar16 = puVar26[lVar14 + 1];
    }
    local_2d0 = (ulonglong)(-uVar16 & uVar16);
    uVar12 = local_2d0 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1e0 = (int)lVar14;
    uStack_2ac = local_1e0 + -1 + local_2a8;
    if (iVar17 < (int)uStack_2ac) {
      uStack_2ac = iVar17;
    }
  }
LAB_146193801:
  pTVar1 = &pFVar7->OperandToBlendState;
  uStack_2bc = (uint)local_2d0;
  uStack_2a4 = local_ac;
  iStack_2a0 = *(int *)&(pFVar7->OperandToBlendState).field_0x8 -
               *(int *)&(pFVar7->OperandToBlendState).field_0x34;
  uVar16 = *(uint *)&(pFVar7->OperandToBlendState).field_0x28;
  uStack_2b0 = 0xffffffff;
  uVar19 = uVar16 & 0xffffffe0;
  TStack_270._padding_ = CONCAT44(uStack_2bc,iStack_2c0);
  TStack_270.CurrentBitIndex = uStack_2ac;
  TStack_270.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar16 >> 5;
  TStack_270._28_4_ = local_ac;
  TStack_270.BaseBitIndex = local_2a8;
  local_250 = CONCAT44(uStack_29c,iStack_2a0);
  local_2c8 = pTVar1;
  local_2b8 = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  local_278 = pTVar1;
  TStack_270.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar16 < 0) || (iVar17 < (int)uVar16)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(pFVar7->OperandToBlendState).field_0x28;
  if (uVar16 != uVar4) {
    puVar23 = *(undefined1 **)&(pFVar7->OperandToBlendState).field_0x20;
    if (puVar23 == (undefined1 *)0x0) {
      puVar23 = puVar2;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar18 * 4);
    while (uVar16 == 0) {
      lVar14 = (longlong)iVar18;
      uVar19 = uVar19 + 0x20;
      iVar18 = iVar18 + 1;
      uVar16 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_146193910;
      uVar16 = *(uint *)(puVar23 + lVar14 * 4 + 4);
    }
    uVar12 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar16 = (uVar19 - 1) + (int)lVar14;
    if ((int)uVar4 < (int)uVar16) {
      uVar16 = uVar4;
    }
  }
LAB_146193910:
  while( true ) {
    pTVar6 = local_278;
    if (*(int *)&local_278->field_0x8 - *(int *)&local_278->field_0x34 != (int)local_250) {
      `TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2d6);
    }
    if (((TStack_270.CurrentBitIndex == uVar16) &&
        (TStack_270.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar6 == pTVar1))
    break;
    lVar14 = *(longlong *)pTVar6 + (longlong)TStack_270.CurrentBitIndex * 0x30;
    piVar3 = (int *)(lVar14 + 0x24);
    if (*piVar3 < 0) {
      DestructItems<TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8>,int>
                (*(TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> **)
                  (lVar14 + 0x18),*(int *)(lVar14 + 0x20));
      *(undefined4 *)(lVar14 + 0x20) = 0;
      if (*piVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x88,8,0,(ForAnyElementType *)(lVar14 + 0x18),0,piVar3);
      }
    }
    else {
      DestructItems<TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8>,int>
                (*(TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> **)
                  (lVar14 + 0x18),*(int *)(lVar14 + 0x20));
      *(undefined4 *)(lVar14 + 0x20) = 0;
    }
    TStack_270.UnvisitedBitMask = TStack_270.UnvisitedBitMask & ~TStack_270._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_270);
  }
  local_60 = 0;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a8);
  return;
}

// Interrogate @ 1461b8fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneBlendingAccumulator::Interrogate
          (FMovieSceneBlendingAccumulator *this,FMovieSceneContext *param_1,
          FMovieSceneInterrogationData *param_2,UObject *param_3)

{
  undefined1 *puVar1;
  TMap<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>_>
  *pTVar2;
  int *piVar3;
  ulonglong uVar4;
  uint uVar5;
  code *pcVar6;
  FMovieSceneBlendingAccumulator *pFVar7;
  FMovieSceneInterrogationData *pFVar8;
  UObject *pUVar9;
  TMap<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>_>
  *pTVar10;
  bool bVar11;
  byte bVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  undefined1 *puVar20;
  undefined1 auStackY_258 [32];
  undefined1 local_228;
  undefined1 local_227;
  undefined1 local_226 [6];
  ulonglong local_220;
  TMap<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>_>
  *local_218;
  int iStack_210;
  uint uStack_20c;
  TBitArray<FDefaultBitArrayAllocator> *local_208;
  undefined4 uStack_200;
  uint uStack_1fc;
  int local_1f8;
  int iStack_1f4;
  int iStack_1f0;
  undefined4 uStack_1ec;
  TMap<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>_>
  *local_1e8;
  int iStack_1e0;
  uint uStack_1dc;
  undefined1 *local_1d8;
  undefined4 uStack_1d0;
  int iStack_1cc;
  int local_1c8;
  undefined4 uStack_1c4;
  int iStack_1c0;
  undefined4 uStack_1bc;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  FMovieSceneBlendingAccumulator *local_1a0;
  FMovieSceneContext *local_198;
  FMovieSceneInterrogationData *local_190;
  UObject *local_188;
  TMap<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>_>
  *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_178;
  undefined8 uStack_158;
  longlong *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  TMap<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>_>
  *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  undefined4 local_d4;
  undefined4 local_b4;
  undefined1 local_a8 [32];
  uint *local_88;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  void *local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_a8._0_8_ = 0;
  local_a8._8_8_ = 0;
  local_88 = (uint *)0x0;
  local_80 = 0;
  local_74 = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_7c = 0x80;
  local_78 = 0xffffffff;
  local_1a0 = this;
  local_198 = param_1;
  local_190 = param_2;
  local_188 = param_3;
  FMovieSceneAccumulatedBlendState::Consolidate
            (&this->UnboundBlendState,
             (TMap<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>,0>_>
              *)local_a8);
  iVar16 = *(int *)&(this->OperandToBlendState).field_0x28;
  puVar1 = &(this->OperandToBlendState).field_0x10;
  pTVar2 = &this->OperandToBlendState;
  local_220 = 1;
  local_1c8 = 0;
  uStack_1dc = 1;
  iStack_1cc = 0;
  iStack_1e0 = 0;
  if (iVar16 != 0) {
    puVar19 = *(uint **)&(this->OperandToBlendState).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uStack_1dc = *puVar19;
    local_1c8 = 0;
    while (uStack_1dc == 0) {
      lVar13 = (longlong)iStack_1e0;
      local_1c8 = local_1c8 + 0x20;
      iStack_1e0 = iStack_1e0 + 1;
      uStack_1dc = 1;
      iStack_1cc = iVar16;
      if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1e0) goto LAB_1461b90dd;
      uStack_1dc = puVar19[lVar13 + 1];
    }
    uStack_1dc = -uStack_1dc & uStack_1dc;
    uVar4 = (ulonglong)uStack_1dc * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1b8 = (int)lVar13;
    iStack_1cc = local_1c8 + -1 + local_1b8;
    if (iVar16 < iStack_1cc) {
      iStack_1cc = iVar16;
    }
  }
LAB_1461b90dd:
  uVar18 = *(uint *)&(this->OperandToBlendState).field_0x28;
  uStack_1c4 = local_d4;
  iStack_1c0 = *(int *)&(this->OperandToBlendState).field_0x8 -
               *(int *)&(this->OperandToBlendState).field_0x34;
  uVar17 = uVar18 & 0xffffffe0;
  TStack_178._padding_ = CONCAT44(uStack_1dc,iStack_1e0);
  uStack_1d0 = 0xffffffff;
  TStack_178.CurrentBitIndex = iStack_1cc;
  TStack_178.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar18 >> 5;
  TStack_178._28_4_ = local_d4;
  TStack_178.BaseBitIndex = local_1c8;
  uStack_158 = CONCAT44(uStack_1bc,iStack_1c0);
  local_1e8 = pTVar2;
  local_1d8 = puVar1;
  local_180 = pTVar2;
  TStack_178.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar16 < (int)uVar18)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(this->OperandToBlendState).field_0x28;
  if (uVar18 != uVar5) {
    puVar20 = *(undefined1 **)&(this->OperandToBlendState).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar15 * 4);
    while (uVar18 == 0) {
      lVar13 = (longlong)iVar15;
      uVar17 = uVar17 + 0x20;
      iVar15 = iVar15 + 1;
      uVar18 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_1461b91e0;
      uVar18 = *(uint *)(puVar20 + lVar13 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1b4 = (int)lVar13;
    uVar18 = local_1b4 + -1 + uVar17;
    if ((int)uVar5 < (int)uVar18) {
      uVar18 = uVar5;
    }
  }
LAB_1461b91e0:
  while( true ) {
    pTVar10 = local_180;
    if (*(int *)&local_180->field_0x8 - *(int *)&local_180->field_0x34 != (int)uStack_158) {
      local_228 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_228);
    }
    uVar17 = local_80;
    if (((TStack_178.CurrentBitIndex == uVar18) &&
        (TStack_178.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar10 == pTVar2)
       ) break;
    FMovieSceneAccumulatedBlendState::Consolidate
              ((FMovieSceneAccumulatedBlendState *)
               ((longlong)TStack_178.CurrentBitIndex * 0x30 + *(longlong *)pTVar10 + 0x18),
               (TMap<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>,0>_>
                *)local_a8);
    TStack_178.UnvisitedBitMask = TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
  }
  iStack_210 = 0;
  local_1f8 = 0;
  uStack_20c = (uint)local_220;
  uStack_1fc = 0;
  if (local_80 != 0) {
    puVar19 = (uint *)(local_a8 + 0x10);
    if (local_88 != (uint *)0x0) {
      puVar19 = local_88;
    }
    uVar18 = *puVar19;
    while (uVar18 == 0) {
      lVar13 = (longlong)iStack_210;
      local_1f8 = local_1f8 + 0x20;
      iStack_210 = iStack_210 + 1;
      uStack_1fc = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_210)
      goto LAB_1461b92d0;
      uVar18 = puVar19[lVar13 + 1];
    }
    uStack_20c = -uVar18 & uVar18;
    uVar4 = (ulonglong)uStack_20c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1b0 = (int)lVar13;
    uStack_1fc = local_1f8 + -1 + local_1b0;
    if ((int)local_80 < (int)uStack_1fc) {
      uStack_1fc = local_80;
    }
  }
LAB_1461b92d0:
  local_218 = (TMap<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>_>
               *)local_a8;
  iStack_1f4 = local_b4;
  local_208 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
  uVar18 = local_80 & 0xffffffe0;
  iStack_1f0 = local_a8._8_4_ - local_74;
  TStack_148._padding_ = CONCAT44(uStack_20c,iStack_210);
  uStack_200 = 0xffffffff;
  TStack_148.CurrentBitIndex = uStack_1fc;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)local_80 >> 5;
  TStack_148._28_4_ = local_b4;
  TStack_148.BaseBitIndex = local_1f8;
  uStack_128 = CONCAT44(uStack_1ec,iStack_1f0);
  bVar12 = (byte)local_80;
  local_150 = (longlong *)local_218;
  TStack_148.Array = local_208;
  if (((int)local_80 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pUVar9 = local_188;
  pFVar8 = local_190;
  pFVar7 = local_1a0;
  if (uVar17 != local_80) {
    puVar19 = (uint *)(local_a8 + 0x10);
    if (local_88 != (uint *)0x0) {
      puVar19 = local_88;
    }
    uVar17 = -1 << (bVar12 & 0x1f) & puVar19[iVar16];
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar16;
      uVar18 = uVar18 + 0x20;
      iVar16 = iVar16 + 1;
      uVar17 = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_1461b93f0;
      uVar17 = puVar19[lVar13 + 1];
    }
    uVar4 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1ac = (int)lVar13;
    uVar17 = local_1ac + -1 + uVar18;
    if ((int)local_80 < (int)uVar17) {
      uVar17 = local_80;
    }
  }
LAB_1461b93f0:
  while( true ) {
    plVar14 = local_150;
    if ((int)local_150[1] - *(int *)((longlong)local_150 + 0x34) != (int)uStack_128) {
      local_227 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_227);
    }
    if (((TStack_148.CurrentBitIndex == uVar17) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))) &&
       (plVar14 == (longlong *)local_a8)) break;
    lVar13 = (longlong)TStack_148.CurrentBitIndex * 0x60 + *plVar14;
    bVar12 = *(byte *)(lVar13 + 0x50);
    plVar14 = (longlong *)(lVar13 + 0x10);
    if ((bVar12 & 1) == 0) {
      plVar14 = (longlong *)0x0;
    }
    else if ((bVar12 & 2) == 0) {
      plVar14 = (longlong *)*plVar14;
    }
    (**(code **)(*plVar14 + 0x10))(plVar14,pUVar9,pFVar8,pFVar7);
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  }
  FMovieSceneAccumulatedBlendState::Reset(&pFVar7->UnboundBlendState);
  iVar16 = *(int *)&(pFVar7->OperandToBlendState).field_0x28;
  puVar1 = &(pFVar7->OperandToBlendState).field_0x10;
  iStack_210 = 0;
  local_1f8 = 0;
  uStack_1fc = local_1f8;
  if (iVar16 != 0) {
    puVar19 = *(uint **)&(pFVar7->OperandToBlendState).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar18 = *puVar19;
    local_1f8 = 0;
    while (uVar18 == 0) {
      lVar13 = (longlong)iStack_210;
      local_1f8 = local_1f8 + 0x20;
      iStack_210 = iStack_210 + 1;
      uStack_1fc = iVar16;
      if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_210) goto LAB_1461b9540;
      uVar18 = puVar19[lVar13 + 1];
    }
    local_220 = (ulonglong)(-uVar18 & uVar18);
    uVar4 = local_220 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1a8 = (int)lVar13;
    uStack_1fc = local_1a8 + -1 + local_1f8;
    if (iVar16 < (int)uStack_1fc) {
      uStack_1fc = iVar16;
    }
  }
LAB_1461b9540:
  pTVar2 = &pFVar7->OperandToBlendState;
  uStack_20c = (uint)local_220;
  iStack_1f4 = iStack_1cc;
  iStack_1f0 = *(int *)&(pFVar7->OperandToBlendState).field_0x8 -
               *(int *)&(pFVar7->OperandToBlendState).field_0x34;
  uVar18 = *(uint *)&(pFVar7->OperandToBlendState).field_0x28;
  uStack_200 = 0xffffffff;
  uVar17 = uVar18 & 0xffffffe0;
  TStack_118._padding_ = CONCAT44(uStack_20c,iStack_210);
  TStack_118.CurrentBitIndex = uStack_1fc;
  TStack_118.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar18 >> 5;
  TStack_118._28_4_ = iStack_1cc;
  TStack_118.BaseBitIndex = local_1f8;
  uStack_f8 = CONCAT44(uStack_1ec,iStack_1f0);
  local_218 = pTVar2;
  local_208 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_120 = pTVar2;
  TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar16 < (int)uVar18)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(pFVar7->OperandToBlendState).field_0x28;
  if (uVar18 != uVar5) {
    puVar20 = *(undefined1 **)&(pFVar7->OperandToBlendState).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar15 * 4);
    while (uVar18 == 0) {
      lVar13 = (longlong)iVar15;
      uVar17 = uVar17 + 0x20;
      iVar15 = iVar15 + 1;
      uVar18 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_1461b9650;
      uVar18 = *(uint *)(puVar20 + lVar13 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar18 = (int)lVar13 + -1 + uVar17;
    if ((int)uVar5 < (int)uVar18) {
      uVar18 = uVar5;
    }
  }
LAB_1461b9650:
  while( true ) {
    pTVar10 = local_120;
    if (*(int *)&local_120->field_0x8 - *(int *)&local_120->field_0x34 != (int)uStack_f8) {
      `TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_226);
    }
    if (((TStack_118.CurrentBitIndex == uVar18) &&
        (TStack_118.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar10 == pTVar2)
       ) break;
    lVar13 = *(longlong *)pTVar10 + (longlong)TStack_118.CurrentBitIndex * 0x30;
    piVar3 = (int *)(lVar13 + 0x24);
    if (*piVar3 < 0) {
      DestructItems<TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8>,int>
                (*(TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> **)
                  (lVar13 + 0x18),*(int *)(lVar13 + 0x20));
      *(undefined4 *)(lVar13 + 0x20) = 0;
      if (*piVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x88,8,0,(ForAnyElementType *)(lVar13 + 0x18),0,piVar3);
      }
    }
    else {
      DestructItems<TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8>,int>
                (*(TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> **)
                  (lVar13 + 0x18),*(int *)(lVar13 + 0x20));
      *(undefined4 *)(lVar13 + 0x20) = 0;
    }
    TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
  }
  local_60 = 0;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a8);
  return;
}

// BlendToken<int> @ 14627da10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneBlendingAccumulator::BlendToken<int>
          (FMovieSceneBlendingAccumulator *this,FMovieSceneBlendingActuatorID param_1,
          FMovieSceneEvaluationScope *param_2,FMovieSceneContext *param_3,int *param_4,
          EMovieSceneBlendType param_5,float param_6,int param_7)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TMovieSceneBlendingActuator<int> *pTVar5;
  TAlignedBytes<8,8> TVar6;
  FMovieSceneAnimTypeID FVar7;
  byte bVar8;
  uchar auVar9 [8];
  TAlignedBytes<8,8> TVar10;
  undefined1 auStack_c8 [40];
  TAlignedBytes<8,8> local_a0;
  byte local_98;
  FMovieSceneEvaluationKey local_90;
  EMovieSceneCompletionMode EStack_84;
  undefined3 uStack_83;
  int local_80;
  float local_7c;
  EMovieSceneBlendType local_78;
  int local_74;
  TTokenEntry<int> local_70;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pTVar5 = FindActuator<int>(this,param_1);
  if (pTVar5 == (TMovieSceneBlendingActuator<int> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FindActuator<ActuatorDataType>(InActuatorTypeID)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneBlendingAccumulator.h"
                       ,0x31,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_98 = local_98 & 0xfc;
  iVar4 = *param_4;
  local_a0.Pad = (uchar  [8])FMemory::Malloc(0x10,8);
  auVar9 = (uchar  [8])&local_a0;
  if ((local_98 & 2) == 0) {
    auVar9 = local_a0.Pad;
  }
  local_98 = local_98 | 1;
  *(undefined ***)auVar9 = &___7__TData_H___TBlendableToken_H__6B_;
  *(int *)((TAlignedBytes<8,8> *)((longlong)auVar9 + 8))->Pad = iVar4;
  if ((local_98 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TVar10.Pad = (uchar  [8])&local_a0;
  if ((local_98 & 2) == 0) {
    TVar10.Pad = local_a0.Pad;
  }
  if ((local_98 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TVar6.Pad = (uchar  [8])&local_a0;
  if ((local_98 & 2) == 0) {
    TVar6.Pad = local_a0.Pad;
  }
  if (TVar10.Pad != TVar6.Pad) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_80 = param_3->HierarchicalBias;
  local_90.SequenceID.Value = (param_2->Key).SequenceID.Value;
  local_90.TrackIdentifier.Value = (param_2->Key).TrackIdentifier.Value;
  unique0x10000199 = *(undefined8 *)&(param_2->Key).SectionIndex;
  local_78 = param_5;
  local_7c = param_6;
  local_74 = param_7;
  FVar7 = GetBlendingDataType<int>();
  local_70._padding_ = *(longlong *)FVar7.ID;
  bVar8 = local_70.Token.Value._8_1_ & 0xfe;
  local_70._padding_ = (longlong)&___7__TTokenEntry_H_FMovieSceneAccumulatedBlendState__6B_;
  local_70.Token.Value._8_1_ = bVar8 | 2;
  if ((local_98 & 1) != 0) {
    local_98 = local_98 & 0xfe;
    bVar8 = bVar8 | 3;
    local_70.Token.Value._8_1_ = (local_98 ^ bVar8) & 2 ^ bVar8;
    local_70.Token.Value.Data.Pad[0] = local_a0.Pad[0];
    local_70.Token.Value.Data.Pad[1] = local_a0.Pad[1];
    local_70.Token.Value.Data.Pad[2] = local_a0.Pad[2];
    local_70.Token.Value.Data.Pad[3] = local_a0.Pad[3];
    local_70.Token.Value.Data.Pad[4] = local_a0.Pad[4];
    local_70.Token.Value.Data.Pad[5] = local_a0.Pad[5];
    local_70.Token.Value.Data.Pad[6] = local_a0.Pad[6];
    local_70.Token.Value.Data.Pad[7] = local_a0.Pad[7];
  }
  piVar1 = &(this->UnboundBlendState).TokensToBlend.ArrayMax;
  local_70.Token.HierarchicalBias = local_80;
  local_70.Token.BlendType = local_78;
  local_70.Token.BlendingOrder = local_74;
  iVar4 = (this->UnboundBlendState).TokensToBlend.ArrayNum;
  local_70.Token.AnimatingScope.Key.SequenceID.Value = local_90.SequenceID.Value;
  local_70.Token.AnimatingScope.Key.TrackIdentifier.Value = local_90.TrackIdentifier.Value;
  local_70.Token.AnimatingScope.Key.SectionIndex = local_90.SectionIndex;
  local_70.Token.AnimatingScope.CompletionMode = EStack_84;
  local_70.Token.AnimatingScope._13_3_ = uStack_83;
  local_70.Token.Weight = local_7c;
  local_70._padding_ = (longlong)param_1;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x888,(ForAnyElementType *)&this->UnboundBlendState,piVar1);
  }
  (this->UnboundBlendState).TokensToBlend.ArrayNum = iVar4 + 1;
  TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8>::
  TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8><FMovieSceneAccumulatedBlendState::TTokenEntry<int>,void>
            ((TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *)
             ((this->UnboundBlendState).TokensToBlend.AllocatorInstance.Data +
             (longlong)iVar4 * 0x88),&local_70);
  if (local_70.Token.Value.bIsValid) {
    TVar10.Pad = (uchar  [8])&local_70.Token;
    if (!local_70.Token.Value.bInline) {
      TVar10.Pad = local_70.Token.Value.Data.Pad;
    }
    local_70.Token.Value.bIsValid = false;
                    /* WARNING: Load size is inaccurate */
    (**(code **)*TVar10.Pad)(TVar10.Pad,0);
    if (!local_70.Token.Value.bInline) {
      FMemory::Free((void *)local_70.Token.Value.Data.Pad);
    }
  }
  if ((local_98 & 1) != 0) {
    TVar10.Pad = (uchar  [8])&local_a0;
    if ((local_98 & 2) == 0) {
      TVar10.Pad = local_a0.Pad;
    }
    local_98 = local_98 & 0xfe;
                    /* WARNING: Load size is inaccurate */
    (**(code **)*TVar10.Pad)(TVar10.Pad,0);
    if ((local_98 & 2) == 0) {
      FMemory::Free((void *)local_a0.Pad);
    }
  }
  return;
}

// FindActuator<int> @ 146280d40

TMovieSceneBlendingActuator<int> * __thiscall
FMovieSceneBlendingAccumulator::FindActuator<int>
          (FMovieSceneBlendingAccumulator *this,FMovieSceneBlendingActuatorID param_1)

{
  longlong lVar1;
  int iVar2;
  FMovieSceneAnimTypeID FVar3;
  longlong *plVar4;
  FMovieSceneBlendingActuatorID *pFVar5;
  FMovieSceneBlendingActuatorID *pFVar6;
  undefined1 *puVar7;
  undefined1 local_res10 [8];
  
  if (*(int *)&(this->Actuators).field_0x8 != *(int *)&(this->Actuators).field_0x34) {
    puVar7 = *(undefined1 **)&(this->Actuators).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->Actuators).field_0x38;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->Actuators).field_0x48 - 1U &
                              param_1._4_4_ * 0x17 + param_1._0_4_) * 4);
    if (iVar2 != -1) {
      do {
        pFVar5 = (FMovieSceneBlendingActuatorID *)
                 ((longlong)iVar2 * 0x20 + *(longlong *)&this->Actuators);
        if (*pFVar5 == param_1) {
          pFVar6 = pFVar5 + 1;
          if (pFVar5 == (FMovieSceneBlendingActuatorID *)0x0) {
            pFVar6 = (FMovieSceneBlendingActuatorID *)0x0;
          }
          if (pFVar6 == (FMovieSceneBlendingActuatorID *)0x0) {
            return (TMovieSceneBlendingActuator<int> *)0x0;
          }
          FVar3 = GetBlendingDataType<int>();
          lVar1 = *(longlong *)FVar3.ID;
          plVar4 = (longlong *)(**(code **)(*(longlong *)*pFVar6 + 8))(*pFVar6,local_res10);
          if (*plVar4 != lVar1) {
            return (TMovieSceneBlendingActuator<int> *)0x0;
          }
          return (TMovieSceneBlendingActuator<int> *)*pFVar6;
        }
        iVar2 = *(int *)(pFVar5 + 3);
      } while (iVar2 != -1);
    }
  }
  return (TMovieSceneBlendingActuator<int> *)0x0;
}

