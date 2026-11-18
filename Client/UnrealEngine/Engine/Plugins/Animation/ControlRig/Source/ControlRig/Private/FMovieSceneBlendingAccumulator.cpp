// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// BlendToken<FControlRigTrackTokenFloat> @ 14a38e270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneBlendingAccumulator::BlendToken<FControlRigTrackTokenFloat>
          (FMovieSceneBlendingAccumulator *this,FMovieSceneEvaluationOperand *param_1,
          FMovieSceneBlendingActuatorID param_2,FMovieSceneEvaluationScope *param_3,
          FMovieSceneContext *param_4,TBlendableToken<FControlRigTrackTokenFloat> *param_5)

{
  int *piVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  FMovieSceneTrackIdentifier FVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  TMovieSceneBlendingActuator<FControlRigTrackTokenFloat> *pTVar10;
  FMovieSceneAccumulatedBlendState *pFVar11;
  byte bVar12;
  TAlignedBytes<8,8> TVar13;
  undefined1 auStack_88 [32];
  TTokenEntry<FControlRigTrackTokenFloat> local_68;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_88;
  pTVar10 = FindActuator<FControlRigTrackTokenFloat>(this,param_2);
  if (pTVar10 == (TMovieSceneBlendingActuator<FControlRigTrackTokenFloat> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("FindActuator<ActuatorDataType>(InActuatorTypeID)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneBlendingAccumulator.h"
                       ,0x42,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar5.Value = (param_3->Key).TrackIdentifier.Value;
  uVar4 = *(undefined8 *)&(param_3->Key).SectionIndex;
  (param_5->AnimatingScope).Key.SequenceID = (FMovieSceneSequenceID)(param_3->Key).SequenceID.Value;
  (param_5->AnimatingScope).Key.TrackIdentifier = (FMovieSceneTrackIdentifier)FVar5.Value;
  *(undefined8 *)&(param_5->AnimatingScope).Key.SectionIndex = uVar4;
  param_5->HierarchicalBias = param_4->HierarchicalBias;
  uVar8 = ::GetTypeHash(param_1);
  pFVar11 = TMapBase<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>_>
            ::FindOrAddImpl<FMovieSceneEvaluationOperand_const_&>
                      ((TMapBase<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>_>
                        *)&this->OperandToBlendState,uVar8,param_1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FMovieSceneAnimTypeID::Unique();
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_68._padding_ = ::TypeId.ID;
  bVar12 = local_68.Token.Value._8_1_ & 0xfe;
  local_68.Token.Value._8_1_ = bVar12 | 2;
  local_68._padding_ =
       (longlong)
       &___7__TTokenEntry_UFControlRigTrackTokenFloat___FMovieSceneAccumulatedBlendState__6B_;
  uVar2 = (param_5->Value).field_0x8;
  if ((param_5->Value).bIsValid) {
    bVar7 = uVar2 & 0xfe;
    bVar12 = bVar12 | 3;
    (param_5->Value).field_0x8 = bVar7;
    local_68.Token.Value._8_1_ = (bVar7 ^ bVar12) & 2 ^ bVar12;
    local_68.Token.Value.Data.Pad = *&(param_5->Value).Data.Pad;
  }
  local_68.Token.HierarchicalBias = param_5->HierarchicalBias;
  piVar1 = &(pFVar11->TokensToBlend).ArrayMax;
  local_68.Token.AnimatingScope.Key.SequenceID.Value =
       (param_5->AnimatingScope).Key.SequenceID.Value;
  local_68.Token.AnimatingScope.Key.TrackIdentifier.Value =
       (param_5->AnimatingScope).Key.TrackIdentifier.Value;
  local_68.Token.AnimatingScope._8_8_ = *(undefined8 *)&(param_5->AnimatingScope).Key.SectionIndex;
  local_68.Token.BlendType = param_5->BlendType;
  local_68.Token.BlendingOrder = param_5->BlendingOrder;
  iVar9 = (pFVar11->TokensToBlend).ArrayNum;
  local_68.Token.Weight = param_5->Weight;
  local_68._padding_ = (longlong)param_2;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x888,(ForAnyElementType *)pFVar11,piVar1);
  }
  (pFVar11->TokensToBlend).ArrayNum = iVar9 + 1;
  TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8>::
  TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8><FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenFloat>,void>
            ((TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *)
             ((pFVar11->TokensToBlend).AllocatorInstance.Data + (longlong)iVar9 * 0x88),&local_68);
  if (local_68.Token.Value.bIsValid) {
    TVar13.Pad = (uchar  [8])&local_68.Token;
    if (!local_68.Token.Value.bInline) {
      TVar13.Pad = local_68.Token.Value.Data.Pad;
    }
    local_68.Token.Value.bIsValid = false;
    (*(code *)**(undefined8 **)TVar13.Pad)(TVar13.Pad,0);
    if (!local_68.Token.Value.bInline) {
      FMemory::Free((void *)local_68.Token.Value.Data.Pad);
    }
  }
  return;
}

// BlendToken<FControlRigTrackTokenTransform> @ 14a38e470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneBlendingAccumulator::BlendToken<FControlRigTrackTokenTransform>
          (FMovieSceneBlendingAccumulator *this,FMovieSceneEvaluationOperand *param_1,
          FMovieSceneBlendingActuatorID param_2,FMovieSceneEvaluationScope *param_3,
          FMovieSceneContext *param_4,TBlendableToken<FControlRigTrackTokenTransform> *param_5)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  FMovieSceneTrackIdentifier FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TMovieSceneBlendingActuator<FControlRigTrackTokenTransform> *pTVar8;
  FMovieSceneAccumulatedBlendState *pFVar9;
  TBlendableToken<FControlRigTrackTokenTransform> *pTVar10;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [24];
  TBlendableToken<FControlRigTrackTokenTransform> local_90;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pTVar8 = FindActuator<FControlRigTrackTokenTransform>(this,param_2);
  if (pTVar8 == (TMovieSceneBlendingActuator<FControlRigTrackTokenTransform> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("FindActuator<ActuatorDataType>(InActuatorTypeID)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneBlendingAccumulator.h"
                       ,0x42,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar4.Value = (param_3->Key).TrackIdentifier.Value;
  uVar3 = *(undefined8 *)&(param_3->Key).SectionIndex;
  (param_5->AnimatingScope).Key.SequenceID = (FMovieSceneSequenceID)(param_3->Key).SequenceID.Value;
  (param_5->AnimatingScope).Key.TrackIdentifier = (FMovieSceneTrackIdentifier)FVar4.Value;
  *(undefined8 *)&(param_5->AnimatingScope).Key.SectionIndex = uVar3;
  param_5->HierarchicalBias = param_4->HierarchicalBias;
  uVar6 = ::GetTypeHash(param_1);
  pFVar9 = TMapBase<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>_>
           ::FindOrAddImpl<FMovieSceneEvaluationOperand_const_&>
                     ((TMapBase<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>_>
                       *)&this->OperandToBlendState,uVar6,param_1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FMovieSceneAnimTypeID::Unique();
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_a8._16_8_ = ::TypeId.ID;
  local_a8._0_8_ =
       &___7__TTokenEntry_UFControlRigTrackTokenTransform___FMovieSceneAccumulatedBlendState__6B_;
  local_a8._8_8_ = param_2;
  TBlendableToken<FControlRigTrackTokenTransform>::TBlendableToken<FControlRigTrackTokenTransform>
            (&local_90,param_5);
  iVar7 = (pFVar9->TokensToBlend).ArrayNum;
  piVar1 = &(pFVar9->TokensToBlend).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x888,(ForAnyElementType *)pFVar9,piVar1);
  }
  (pFVar9->TokensToBlend).ArrayNum = iVar7 + 1;
  TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8>::
  TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8><FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenTransform>,void>
            ((TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *)
             ((pFVar9->TokensToBlend).AllocatorInstance.Data + (longlong)iVar7 * 0x88),
             (TTokenEntry<FControlRigTrackTokenTransform> *)local_a8);
  if (local_90.Value.bIsValid) {
    pTVar10 = &local_90;
    if (!local_90.Value.bInline) {
      pTVar10 = (TBlendableToken<FControlRigTrackTokenTransform> *)local_90.Value.Data.Pad._0_8_;
    }
    local_90.Value.bIsValid = false;
    (*(code *)**(undefined8 **)(pTVar10->Value).Data.Pad)(pTVar10,0);
    if (!local_90.Value.bInline) {
      FMemory::Free((void *)local_90.Value.Data.Pad._0_8_);
    }
  }
  return;
}

// BlendToken<FControlRigTrackTokenVector2D> @ 14a38e640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneBlendingAccumulator::BlendToken<FControlRigTrackTokenVector2D>
          (FMovieSceneBlendingAccumulator *this,FMovieSceneEvaluationOperand *param_1,
          FMovieSceneBlendingActuatorID param_2,FMovieSceneEvaluationScope *param_3,
          FMovieSceneContext *param_4,TBlendableToken<FControlRigTrackTokenVector2D> *param_5)

{
  int *piVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  FMovieSceneTrackIdentifier FVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  TMovieSceneBlendingActuator<FControlRigTrackTokenVector2D> *pTVar10;
  FMovieSceneAccumulatedBlendState *pFVar11;
  byte bVar12;
  undefined8 ******ppppppuVar13;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  undefined8 *****local_60;
  uchar auStack_58 [8];
  byte local_50;
  FMovieSceneEvaluationKey local_48;
  int local_38;
  float local_34;
  EMovieSceneBlendType local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pTVar10 = FindActuator<FControlRigTrackTokenVector2D>(this,param_2);
  if (pTVar10 == (TMovieSceneBlendingActuator<FControlRigTrackTokenVector2D> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("FindActuator<ActuatorDataType>(InActuatorTypeID)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneBlendingAccumulator.h"
                       ,0x42,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar5.Value = (param_3->Key).TrackIdentifier.Value;
  uVar4 = *(undefined8 *)&(param_3->Key).SectionIndex;
  (param_5->AnimatingScope).Key.SequenceID = (FMovieSceneSequenceID)(param_3->Key).SequenceID.Value;
  (param_5->AnimatingScope).Key.TrackIdentifier = (FMovieSceneTrackIdentifier)FVar5.Value;
  *(undefined8 *)&(param_5->AnimatingScope).Key.SectionIndex = uVar4;
  param_5->HierarchicalBias = param_4->HierarchicalBias;
  uVar8 = ::GetTypeHash(param_1);
  pFVar11 = TMapBase<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>_>
            ::FindOrAddImpl<FMovieSceneEvaluationOperand_const_&>
                      ((TMapBase<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>_>
                        *)&this->OperandToBlendState,uVar8,param_1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FMovieSceneAnimTypeID::Unique();
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_78._16_8_ = ::TypeId.ID;
  bVar12 = local_50 & 0xfe;
  local_50 = bVar12 | 2;
  local_78._0_8_ =
       &___7__TTokenEntry_UFControlRigTrackTokenVector2D___FMovieSceneAccumulatedBlendState__6B_;
  uVar2 = (param_5->Value).field_0x10;
  if ((param_5->Value).bIsValid) {
    local_60 = *(undefined8 ******)(param_5->Value).Data.Pad;
    auStack_58 = *(uchar (*) [8])((param_5->Value).Data.Pad + 8);
    bVar7 = uVar2 & 0xfe;
    bVar12 = bVar12 | 3;
    (param_5->Value).field_0x10 = bVar7;
    local_50 = (bVar7 ^ bVar12) & 2 ^ bVar12;
  }
  local_38 = param_5->HierarchicalBias;
  piVar1 = &(pFVar11->TokensToBlend).ArrayMax;
  local_48.SequenceID.Value = (param_5->AnimatingScope).Key.SequenceID.Value;
  local_48.TrackIdentifier.Value = (param_5->AnimatingScope).Key.TrackIdentifier.Value;
  unique0x100001b4 = *(undefined8 *)&(param_5->AnimatingScope).Key.SectionIndex;
  local_30 = param_5->BlendType;
  local_2c = param_5->BlendingOrder;
  iVar9 = (pFVar11->TokensToBlend).ArrayNum;
  local_34 = param_5->Weight;
  local_78._8_8_ = param_2;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x888,(ForAnyElementType *)pFVar11,piVar1);
  }
  (pFVar11->TokensToBlend).ArrayNum = iVar9 + 1;
  TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8>::
  TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8><FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenVector2D>,void>
            ((TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *)
             ((pFVar11->TokensToBlend).AllocatorInstance.Data + (longlong)iVar9 * 0x88),
             (TTokenEntry<FControlRigTrackTokenVector2D> *)local_78);
  if ((local_50 & 1) != 0) {
    ppppppuVar13 = &local_60;
    if ((local_50 & 2) == 0) {
      ppppppuVar13 = (undefined8 ******)local_60;
    }
    local_50 = local_50 & 0xfe;
    (*(code *)**ppppppuVar13)(ppppppuVar13,0);
    if ((local_50 & 2) == 0) {
      FMemory::Free(local_60);
    }
  }
  return;
}

// BlendToken<FControlRigTrackTokenVector> @ 14a38e850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneBlendingAccumulator::BlendToken<FControlRigTrackTokenVector>
          (FMovieSceneBlendingAccumulator *this,FMovieSceneEvaluationOperand *param_1,
          FMovieSceneBlendingActuatorID param_2,FMovieSceneEvaluationScope *param_3,
          FMovieSceneContext *param_4,TBlendableToken<FControlRigTrackTokenVector> *param_5)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  FMovieSceneTrackIdentifier FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TMovieSceneBlendingActuator<FControlRigTrackTokenVector> *pTVar8;
  FMovieSceneAccumulatedBlendState *pFVar9;
  TBlendableToken<FControlRigTrackTokenVector> *pTVar10;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  TBlendableToken<FControlRigTrackTokenVector> local_60;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_98;
  pTVar8 = FindActuator<FControlRigTrackTokenVector>(this,param_2);
  if (pTVar8 == (TMovieSceneBlendingActuator<FControlRigTrackTokenVector> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("FindActuator<ActuatorDataType>(InActuatorTypeID)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneBlendingAccumulator.h"
                       ,0x42,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar4.Value = (param_3->Key).TrackIdentifier.Value;
  uVar3 = *(undefined8 *)&(param_3->Key).SectionIndex;
  (param_5->AnimatingScope).Key.SequenceID = (FMovieSceneSequenceID)(param_3->Key).SequenceID.Value;
  (param_5->AnimatingScope).Key.TrackIdentifier = (FMovieSceneTrackIdentifier)FVar4.Value;
  *(undefined8 *)&(param_5->AnimatingScope).Key.SectionIndex = uVar3;
  param_5->HierarchicalBias = param_4->HierarchicalBias;
  uVar6 = ::GetTypeHash(param_1);
  pFVar9 = TMapBase<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>_>
           ::FindOrAddImpl<FMovieSceneEvaluationOperand_const_&>
                     ((TMapBase<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>_>
                       *)&this->OperandToBlendState,uVar6,param_1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FMovieSceneAnimTypeID::Unique();
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_78._16_8_ = ::TypeId.ID;
  local_78._0_8_ =
       &___7__TTokenEntry_UFControlRigTrackTokenVector___FMovieSceneAccumulatedBlendState__6B_;
  local_78._8_8_ = param_2;
  TBlendableToken<FControlRigTrackTokenVector>::TBlendableToken<FControlRigTrackTokenVector>
            (&local_60,param_5);
  iVar7 = (pFVar9->TokensToBlend).ArrayNum;
  piVar1 = &(pFVar9->TokensToBlend).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x888,(ForAnyElementType *)pFVar9,piVar1);
  }
  (pFVar9->TokensToBlend).ArrayNum = iVar7 + 1;
  TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8>::
  TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8><FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenVector>,void>
            ((TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *)
             ((pFVar9->TokensToBlend).AllocatorInstance.Data + (longlong)iVar7 * 0x88),
             (TTokenEntry<FControlRigTrackTokenVector> *)local_78);
  if (local_60.Value.bIsValid) {
    pTVar10 = &local_60;
    if (!local_60.Value.bInline) {
      pTVar10 = (TBlendableToken<FControlRigTrackTokenVector> *)local_60.Value.Data.Pad._0_8_;
    }
    local_60.Value.bIsValid = false;
    (*(code *)**(undefined8 **)(pTVar10->Value).Data.Pad)(pTVar10,0);
    if (!local_60.Value.bInline) {
      FMemory::Free((void *)local_60.Value.Data.Pad._0_8_);
    }
  }
  return;
}

// FindActuator<FControlRigTrackTokenFloat> @ 14a3972f0

TMovieSceneBlendingActuator<FControlRigTrackTokenFloat> * __thiscall
FMovieSceneBlendingAccumulator::FindActuator<FControlRigTrackTokenFloat>
          (FMovieSceneBlendingAccumulator *this,FMovieSceneBlendingActuatorID param_1)

{
  FMovieSceneAnimTypeID FVar1;
  int iVar2;
  ulong64 *puVar3;
  FMovieSceneBlendingActuatorID *pFVar4;
  FMovieSceneBlendingActuatorID *pFVar5;
  undefined1 *puVar6;
  undefined1 local_res8 [8];
  
  if (*(int *)&(this->Actuators).field_0x8 != *(int *)&(this->Actuators).field_0x34) {
    puVar6 = *(undefined1 **)&(this->Actuators).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Actuators).field_0x38;
    }
    iVar2 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->Actuators).field_0x48 - 1U &
                              param_1._4_4_ * 0x17 + param_1._0_4_) * 4);
    if (iVar2 != -1) {
      do {
        pFVar4 = (FMovieSceneBlendingActuatorID *)
                 ((longlong)iVar2 * 0x20 + *(longlong *)&this->Actuators);
        if (*pFVar4 == param_1) {
          pFVar5 = pFVar4 + 1;
          if (pFVar4 == (FMovieSceneBlendingActuatorID *)0x0) {
            pFVar5 = (FMovieSceneBlendingActuatorID *)0x0;
          }
          if (pFVar5 == (FMovieSceneBlendingActuatorID *)0x0) {
            return (TMovieSceneBlendingActuator<FControlRigTrackTokenFloat> *)0x0;
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            FMovieSceneAnimTypeID::Unique();
            _Init_thread_footer(&::_TSS0);
          }
          FVar1.ID = ::TypeId.ID;
          puVar3 = (ulong64 *)(**(code **)(*(longlong *)*pFVar5 + 8))(*pFVar5,local_res8);
          if (*puVar3 != FVar1.ID) {
            return (TMovieSceneBlendingActuator<FControlRigTrackTokenFloat> *)0x0;
          }
          return (TMovieSceneBlendingActuator<FControlRigTrackTokenFloat> *)*pFVar5;
        }
        iVar2 = *(int *)(pFVar4 + 3);
      } while (iVar2 != -1);
    }
  }
  return (TMovieSceneBlendingActuator<FControlRigTrackTokenFloat> *)0x0;
}

// FindActuator<FControlRigTrackTokenTransform> @ 14a397400

TMovieSceneBlendingActuator<FControlRigTrackTokenTransform> * __thiscall
FMovieSceneBlendingAccumulator::FindActuator<FControlRigTrackTokenTransform>
          (FMovieSceneBlendingAccumulator *this,FMovieSceneBlendingActuatorID param_1)

{
  FMovieSceneAnimTypeID FVar1;
  int iVar2;
  ulong64 *puVar3;
  FMovieSceneBlendingActuatorID *pFVar4;
  FMovieSceneBlendingActuatorID *pFVar5;
  undefined1 *puVar6;
  undefined1 local_res8 [8];
  
  if (*(int *)&(this->Actuators).field_0x8 != *(int *)&(this->Actuators).field_0x34) {
    puVar6 = *(undefined1 **)&(this->Actuators).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Actuators).field_0x38;
    }
    iVar2 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->Actuators).field_0x48 - 1U &
                              param_1._4_4_ * 0x17 + param_1._0_4_) * 4);
    if (iVar2 != -1) {
      do {
        pFVar4 = (FMovieSceneBlendingActuatorID *)
                 ((longlong)iVar2 * 0x20 + *(longlong *)&this->Actuators);
        if (*pFVar4 == param_1) {
          pFVar5 = pFVar4 + 1;
          if (pFVar4 == (FMovieSceneBlendingActuatorID *)0x0) {
            pFVar5 = (FMovieSceneBlendingActuatorID *)0x0;
          }
          if (pFVar5 == (FMovieSceneBlendingActuatorID *)0x0) {
            return (TMovieSceneBlendingActuator<FControlRigTrackTokenTransform> *)0x0;
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            FMovieSceneAnimTypeID::Unique();
            _Init_thread_footer(&::_TSS0);
          }
          FVar1.ID = ::TypeId.ID;
          puVar3 = (ulong64 *)(**(code **)(*(longlong *)*pFVar5 + 8))(*pFVar5,local_res8);
          if (*puVar3 != FVar1.ID) {
            return (TMovieSceneBlendingActuator<FControlRigTrackTokenTransform> *)0x0;
          }
          return (TMovieSceneBlendingActuator<FControlRigTrackTokenTransform> *)*pFVar5;
        }
        iVar2 = *(int *)(pFVar4 + 3);
      } while (iVar2 != -1);
    }
  }
  return (TMovieSceneBlendingActuator<FControlRigTrackTokenTransform> *)0x0;
}

// FindActuator<FControlRigTrackTokenVector2D> @ 14a397510

TMovieSceneBlendingActuator<FControlRigTrackTokenVector2D> * __thiscall
FMovieSceneBlendingAccumulator::FindActuator<FControlRigTrackTokenVector2D>
          (FMovieSceneBlendingAccumulator *this,FMovieSceneBlendingActuatorID param_1)

{
  FMovieSceneAnimTypeID FVar1;
  int iVar2;
  ulong64 *puVar3;
  FMovieSceneBlendingActuatorID *pFVar4;
  FMovieSceneBlendingActuatorID *pFVar5;
  undefined1 *puVar6;
  undefined1 local_res8 [8];
  
  if (*(int *)&(this->Actuators).field_0x8 != *(int *)&(this->Actuators).field_0x34) {
    puVar6 = *(undefined1 **)&(this->Actuators).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Actuators).field_0x38;
    }
    iVar2 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->Actuators).field_0x48 - 1U &
                              param_1._4_4_ * 0x17 + param_1._0_4_) * 4);
    if (iVar2 != -1) {
      do {
        pFVar4 = (FMovieSceneBlendingActuatorID *)
                 ((longlong)iVar2 * 0x20 + *(longlong *)&this->Actuators);
        if (*pFVar4 == param_1) {
          pFVar5 = pFVar4 + 1;
          if (pFVar4 == (FMovieSceneBlendingActuatorID *)0x0) {
            pFVar5 = (FMovieSceneBlendingActuatorID *)0x0;
          }
          if (pFVar5 == (FMovieSceneBlendingActuatorID *)0x0) {
            return (TMovieSceneBlendingActuator<FControlRigTrackTokenVector2D> *)0x0;
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            FMovieSceneAnimTypeID::Unique();
            _Init_thread_footer(&::_TSS0);
          }
          FVar1.ID = ::TypeId.ID;
          puVar3 = (ulong64 *)(**(code **)(*(longlong *)*pFVar5 + 8))(*pFVar5,local_res8);
          if (*puVar3 != FVar1.ID) {
            return (TMovieSceneBlendingActuator<FControlRigTrackTokenVector2D> *)0x0;
          }
          return (TMovieSceneBlendingActuator<FControlRigTrackTokenVector2D> *)*pFVar5;
        }
        iVar2 = *(int *)(pFVar4 + 3);
      } while (iVar2 != -1);
    }
  }
  return (TMovieSceneBlendingActuator<FControlRigTrackTokenVector2D> *)0x0;
}

// FindActuator<FControlRigTrackTokenVector> @ 14a397620

TMovieSceneBlendingActuator<FControlRigTrackTokenVector> * __thiscall
FMovieSceneBlendingAccumulator::FindActuator<FControlRigTrackTokenVector>
          (FMovieSceneBlendingAccumulator *this,FMovieSceneBlendingActuatorID param_1)

{
  FMovieSceneAnimTypeID FVar1;
  int iVar2;
  ulong64 *puVar3;
  FMovieSceneBlendingActuatorID *pFVar4;
  FMovieSceneBlendingActuatorID *pFVar5;
  undefined1 *puVar6;
  undefined1 local_res8 [8];
  
  if (*(int *)&(this->Actuators).field_0x8 != *(int *)&(this->Actuators).field_0x34) {
    puVar6 = *(undefined1 **)&(this->Actuators).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Actuators).field_0x38;
    }
    iVar2 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->Actuators).field_0x48 - 1U &
                              param_1._4_4_ * 0x17 + param_1._0_4_) * 4);
    if (iVar2 != -1) {
      do {
        pFVar4 = (FMovieSceneBlendingActuatorID *)
                 ((longlong)iVar2 * 0x20 + *(longlong *)&this->Actuators);
        if (*pFVar4 == param_1) {
          pFVar5 = pFVar4 + 1;
          if (pFVar4 == (FMovieSceneBlendingActuatorID *)0x0) {
            pFVar5 = (FMovieSceneBlendingActuatorID *)0x0;
          }
          if (pFVar5 == (FMovieSceneBlendingActuatorID *)0x0) {
            return (TMovieSceneBlendingActuator<FControlRigTrackTokenVector> *)0x0;
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            FMovieSceneAnimTypeID::Unique();
            _Init_thread_footer(&::_TSS0);
          }
          FVar1.ID = ::TypeId.ID;
          puVar3 = (ulong64 *)(**(code **)(*(longlong *)*pFVar5 + 8))(*pFVar5,local_res8);
          if (*puVar3 != FVar1.ID) {
            return (TMovieSceneBlendingActuator<FControlRigTrackTokenVector> *)0x0;
          }
          return (TMovieSceneBlendingActuator<FControlRigTrackTokenVector> *)*pFVar5;
        }
        iVar2 = *(int *)(pFVar4 + 3);
      } while (iVar2 != -1);
    }
  }
  return (TMovieSceneBlendingActuator<FControlRigTrackTokenVector> *)0x0;
}

